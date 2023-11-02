
@interface PXGScrollViewContainerConfiguration : NSObject <PXGViewUserData> {
    <PXGScrollViewContainerDelegate> * _delegate;
    PXGScrollViewModel * _scrollViewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGScrollViewContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXGScrollViewModel *scrollViewModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)scrollViewModel;
- (void)setDelegate:(id)arg1;
- (void)setScrollViewModel:(id)arg1;

@end
