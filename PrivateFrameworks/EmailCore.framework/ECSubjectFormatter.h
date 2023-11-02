
@interface ECSubjectFormatter : NSFormatter <EFLoggable> {
    _ECSubjectFormatterContext * _forwardContext;
    _ECSubjectFormatterContext * _replyContext;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _ECSubjectFormatterContext *forwardContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _ECSubjectFormatterContext *replyContext;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

+ (id)_subjectStringForDisplayForObject:(id)arg1 style:(long long)arg2;
+ (id)localizedForwardPrefix;
+ (id)localizedReplyPrefix;
+ (id)log;
+ (id)nonLocalizedForwardPrefix;
+ (id)nonLocalizedReplyPrefix;
+ (id)subjectStringForDisplayForMessage:(id)arg1;
+ (id)subjectStringForDisplayForMessage:(id)arg1 style:(long long)arg2;
+ (id)subjectStringForDisplayForSubject:(id)arg1;
+ (id)subjectStringForDisplayForSubject:(id)arg1 style:(long long)arg2;
+ (id)subjectStringForDisplayForSubjectString:(id)arg1;
+ (id)subjectStringForDisplayForSubjectString:(id)arg1 style:(long long)arg2;

- (void).cxx_destruct;
- (id)_localizedPrefixForSubjectFromSubject:(id)arg1;
- (id)forwardContext;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (id)replyContext;
- (void)setForwardContext:(id)arg1;
- (void)setReplyContext:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (long long)style;

@end
