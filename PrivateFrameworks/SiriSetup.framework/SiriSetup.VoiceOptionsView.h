
@interface SiriSetup.VoiceOptionsView : NSObject <SUICVoiceSelectionDisplaying, UITableViewDelegate> {
    void $__lazy_storage_$_tableViewDataSource;
    void cellReuseIdentifier;
    void sectionReuseIdentifier;
    void tableView;
    void viewModel;
    void voiceSelectionEventHandler;
    void voiceSelectionViewModelProvider;
}

@property (nonatomic, retain) <SUICVoiceSelectionEventHandling> *voiceSelectionEventHandler;
@property (nonatomic, retain) <SUICVoiceSelectionViewModelProviding> *voiceSelectionViewModelProvider;

- (void).cxx_destruct;
- (id)init;
- (void)setVoiceSelectionEventHandler:(id)arg1;
- (void)setVoiceSelectionViewModelProvider:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)voiceSelectionEventHandler;
- (void)voiceSelectionViewModelDidChange;
- (id)voiceSelectionViewModelProvider;

@end
