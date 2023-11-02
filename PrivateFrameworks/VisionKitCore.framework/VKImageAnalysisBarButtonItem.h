
@interface VKImageAnalysisBarButtonItem : VKSelectableBarButtonItem {
    unsigned long long  _mode;
}

@property (nonatomic) unsigned long long mode;

+ (id)analysisButtonWithTarget:(id)arg1 action:(SEL)arg2 mode:(unsigned long long)arg3;
+ (id)imageForMode:(unsigned long long)arg1;

- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;

@end
