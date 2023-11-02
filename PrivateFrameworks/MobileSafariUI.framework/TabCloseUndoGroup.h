
@interface TabCloseUndoGroup : NSObject {
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)name;
- (long long)type;

@end
