
@protocol CAMLevelViewModelChangeObserver <CAMChangeObserver>

@required

- (void)observable:(CAMLevelViewModel *)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;

@end
