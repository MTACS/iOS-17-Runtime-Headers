
@interface PXMessagesStackPlaybackControlUserData : NSObject <PXGViewUserData> {
    long long  _itemIndex;
    PXMessagesStackPlaybackControlViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long itemIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXMessagesStackPlaybackControlViewModel *viewModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithItemIndex:(long long)arg1 viewModel:(id)arg2;
- (long long)itemIndex;
- (id)viewModel;

@end
