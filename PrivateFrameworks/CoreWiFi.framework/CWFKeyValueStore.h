
@interface CWFKeyValueStore : NSObject {
    bool  _activated;
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    int  _firstUnlockNotificationToken;
    NSString * _identifier;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    long long  _type;
    NSUbiquitousKeyValueStore * _ubiquitousKVS;
    bool  _unlockedSinceBoot;
}

@property (getter=isActivated, nonatomic) bool activated;
@property (copy) id /* block */ eventHandler;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)__debugDescriptionForType:(long long)arg1;
- (bool)__synchronize;
- (void)__ubiquitousKVSChanged:(id)arg1;
- (void)activate;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id /* block */)eventHandler;
- (id)identifier;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isActivated;
- (id)objectForKey:(id)arg1;
- (void)removeAllEntries;
- (void)setActivated:(bool)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (bool)synchronize;
- (long long)type;

@end
