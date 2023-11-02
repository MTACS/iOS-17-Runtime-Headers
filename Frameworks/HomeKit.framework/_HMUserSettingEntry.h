
@interface _HMUserSettingEntry : HMFObject {
    NSArray * _constraints;
    NSString * _keyPath;
}

@property (nonatomic, readonly) NSArray *constraints;
@property (nonatomic, readonly) NSString *keyPath;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithKeyPath:(id)arg1 constraintArray:(id)arg2;
- (id)keyPath;

@end
