
@interface DownloadTableViewCell : UITableViewCell <SFDeferrableUpdateView, _SFDownloadIconCacheObserver> {
    UIButton * _cancelButton;
    <DownloadTableViewCellDelegate> * _delegate;
    _SFDownload * _download;
    _SFDownloadIconCache * _iconCache;
    UIImageView * _iconView;
    UILabel * _nameLabel;
    UIProgressView * _progressView;
    UIButton * _resumeButton;
    UIButton * _revealButton;
    UILabel * _statusLabel;
    struct { 
        id foregroundNotificationObserver; 
        id backgroundNotificationObserver; 
        bool needsDeferredContentUpdate; 
        bool sceneIsForeground; 
    }  deferrableUpdateViewState;
}

@property (nonatomic) <DownloadTableViewCellDelegate> *delegate;
@property (nonatomic, retain) _SFDownload *download;
@property (nonatomic, retain) _SFDownloadIconCache *iconCache;
@property (nonatomic, retain) UIImageView *iconView;

+ (id)tableViewCellForSizeEstimation;

- (void).cxx_destruct;
- (id)_busyStatus;
- (void)_buttonPressed:(id)arg1;
- (id)_buttonWithSymbolName:(id)arg1;
- (void)_downloadChanged:(id)arg1;
- (void)_downloadURLChanged:(id)arg1;
- (void)_updateCellContents;
- (void)_updateCellContentsForSizing;
- (void)dealloc;
- (struct { id x1; id x2; bool x3; bool x4; }*)deferrableUpdateViewState;
- (id)delegate;
- (void)didMoveToWindow;
- (id)download;
- (void)downloadIconCache:(id)arg1 didGenerateNewIcon:(id)arg2 forSource:(id)arg3;
- (id)iconCache;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDownload:(id)arg1;
- (void)setIconCache:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;

@end
