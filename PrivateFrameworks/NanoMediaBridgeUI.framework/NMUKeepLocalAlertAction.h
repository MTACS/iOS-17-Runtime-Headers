
@interface NMUKeepLocalAlertAction : NSObject {
    id /* block */  _actionHandler;
    unsigned long long  _downloadAction;
    NMSKeepLocalRequestOptions * _keepLocalRequestOptions;
    bool  _shouldPerformKeepLocalRequest;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) unsigned long long downloadAction;
@property (nonatomic, retain) NMSKeepLocalRequestOptions *keepLocalRequestOptions;
@property (nonatomic) bool shouldPerformKeepLocalRequest;
@property (nonatomic, retain) NSString *title;

+ (id)actionWithTitle:(id)arg1 shouldPerformKeepLocalRequest:(bool)arg2 keepLocalRequestOptions:(id)arg3 downloadAction:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (unsigned long long)downloadAction;
- (id)keepLocalRequestOptions;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setDownloadAction:(unsigned long long)arg1;
- (void)setKeepLocalRequestOptions:(id)arg1;
- (void)setShouldPerformKeepLocalRequest:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldPerformKeepLocalRequest;
- (id)title;

@end
