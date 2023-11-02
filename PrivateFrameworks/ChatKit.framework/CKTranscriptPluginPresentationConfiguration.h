
@interface CKTranscriptPluginPresentationConfiguration : NSObject {
    unsigned long long  _permittedArrowDirections;
    bool  _shouldDisableSnapshotView;
    UIView * _sourceView;
}

@property (nonatomic, readonly) unsigned long long permittedArrowDirections;
@property (nonatomic, readonly) bool shouldDisableSnapshotView;
@property (nonatomic, readonly) UIView *sourceView;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 shouldDisableSnapshotView:(bool)arg3;
- (unsigned long long)permittedArrowDirections;
- (bool)shouldDisableSnapshotView;
- (id)sourceView;

@end
