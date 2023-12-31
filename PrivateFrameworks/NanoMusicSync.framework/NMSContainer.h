
@interface NMSContainer : NSObject {
    NSNumber * _addedDate;
    NSString * _name;
    NSNumber * _persistentID;
    NSNumber * _playedDate;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSNumber *addedDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, retain) NSNumber *playedDate;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)addedDate;
- (id)initWithPersistentID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
- (id)name;
- (id)persistentID;
- (id)playedDate;
- (void)setAddedDate:(id)arg1;
- (void)setPlayedDate:(id)arg1;
- (unsigned long long)type;

@end
