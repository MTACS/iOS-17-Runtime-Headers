
@interface SBRootSettings : _UISettings {
    SBAttentionAwarenessSettings * _attentionAwarenessSettings;
}

@property (retain) SBAttentionAwarenessSettings *attentionAwarenessSettings;

- (void).cxx_destruct;
- (id)attentionAwarenessSettings;
- (void)setAttentionAwarenessSettings:(id)arg1;

@end
