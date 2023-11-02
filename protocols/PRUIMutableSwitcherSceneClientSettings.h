
@protocol PRUIMutableSwitcherSceneClientSettings <PRUISwitcherSceneClientSettings>

@required

- (struct CGPoint { double x1; double x2; })prui_primaryPosterOffset;
- (double)prui_primaryPosterScale;
- (void)prui_setPrimaryPosterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)prui_setPrimaryPosterScale:(double)arg1;
- (void)prui_setSwitcherContextID:(unsigned int)arg1;
- (void)prui_setSwitcherLayoutMode:(unsigned long long)arg1;
- (unsigned int)prui_switcherContextID;
- (unsigned long long)prui_switcherLayoutMode;

@end
