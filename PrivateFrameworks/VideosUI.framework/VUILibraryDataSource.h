
@interface VUILibraryDataSource : NSObject {
    <VUILibraryDataSourceDelegate> * _delegate;
    bool  _hasCompletedInitialFetch;
}

@property (nonatomic) <VUILibraryDataSourceDelegate> *delegate;
@property (nonatomic) bool hasCompletedInitialFetch;

- (void).cxx_destruct;
- (id)delegate;
- (bool)hasCompletedInitialFetch;
- (void)setDelegate:(id)arg1;
- (void)setHasCompletedInitialFetch:(bool)arg1;

@end
