
@interface MTEpisodeUnavailableUtil : MTSingleton

+ (id)alertTitleForUnavailableReason:(unsigned long long)arg1;
+ (id)longReasonTextForNoInternet;
+ (id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2;
+ (id)stringForUnavailableReason:(unsigned long long)arg1;
+ (unsigned long long)unavailableReasonForEpisode:(id)arg1;

- (void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(id /* block */)arg3;
- (bool)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(id /* block */)arg3;

@end
