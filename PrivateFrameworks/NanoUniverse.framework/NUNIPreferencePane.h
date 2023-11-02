
@interface NUNIPreferencePane : NSObject <NanoUniverse.PreferencePaneDelegate> {
    <NUNIPreferencePaneDelegate> * _delegate;
    _TtC12NanoUniverse14PreferencePane * _preference;
}

@property (nonatomic) <NUNIPreferencePaneDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPreferencePane:(id)arg1;
- (id)initWithSliders:(id)arg1 toggles:(id)arg2 pickerOptions:(id)arg3 pickerSelections:(id)arg4;
- (void)preferencePaneDidChangeWithPreference:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
