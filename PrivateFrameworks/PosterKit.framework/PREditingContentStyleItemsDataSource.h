
@interface PREditingContentStyleItemsDataSource : NSObject <PREditingContentStyleItemsDataSource> {
    PREditorContentStylePickerConfiguration * _configuration;
    double  _contentsLuminance;
    NSArray * _coordinators;
    <PREditingContentStyleItemsDataSourceDelegate> * _delegate;
    bool  _includeSuggestedStyle;
}

@property (nonatomic, retain) PREditorContentStylePickerConfiguration *configuration;
@property (nonatomic) double contentsLuminance;
@property (nonatomic, retain) NSArray *coordinators;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PREditingContentStyleItemsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeSuggestedStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buildCoordinators;
- (id)configuration;
- (double)contentsLuminance;
- (id)coordinatorForIndex:(unsigned long long)arg1;
- (id)coordinators;
- (id)delegate;
- (id)firstCoordinatorPassingTest:(id /* block */)arg1;
- (bool)includeSuggestedStyle;
- (unsigned long long)indexForCoordinator:(id)arg1;
- (id)initWithConfiguration:(id)arg1 includesSuggestedStyle:(bool)arg2 delegate:(id)arg3;
- (unsigned long long)numberOfCoordinators;
- (void)setConfiguration:(id)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setCoordinators:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludeSuggestedStyle:(bool)arg1;

@end
