
@interface PXGFocusableViewConfiguration : NSObject <PXGViewUserData> {
    NSString * _debugName;
    <PXGFocusableViewDelegate> * _delegate;
    long long  _focusability;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugName;
@property (nonatomic) <PXGFocusableViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long focusability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugName;
- (id)delegate;
- (long long)focusability;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDebugName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusability:(long long)arg1;

@end
