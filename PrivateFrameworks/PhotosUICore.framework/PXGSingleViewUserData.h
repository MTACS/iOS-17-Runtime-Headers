
@interface PXGSingleViewUserData : NSObject <PXGViewUserData> {
    UIView * _contentView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentView:(id)arg1;

@end
