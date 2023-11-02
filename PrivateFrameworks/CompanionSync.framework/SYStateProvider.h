
@interface SYStateProvider : NSObject {
    id /* block */  _encoder;
    unsigned long long  _handle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _state;
    unsigned int  _type;
}

@property (nonatomic, copy) id /* block */ encoder;

+ (id)stateProviderWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;

- (void).cxx_destruct;
- (id)_encodedState;
- (void)dealloc;
- (id /* block */)encoder;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (void)setEncoder:(id /* block */)arg1;
- (void)updateState:(id)arg1;

@end
