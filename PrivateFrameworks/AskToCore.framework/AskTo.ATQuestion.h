
@interface AskTo.ATQuestion : NSObject {
    void answerChoices;
    void associatedContentAdamIdentifier;
    void associatedContentBundleIdentifier;
    void associatedContentDisplayName;
    void associatedContentIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expirationDate;
    void id;
    void notificationText;
    void summary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  systemId;
    void title;
    void topic;
    void version;
}

@property (nonatomic, copy) NSArray *answerChoices;
@property (nonatomic, copy) NSString *associatedContentAdamIdentifier;
@property (nonatomic, copy) NSString *associatedContentBundleIdentifier;
@property (nonatomic, copy) NSString *associatedContentDisplayName;
@property (nonatomic, copy) NSString *associatedContentIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSString *notificationText;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) ATQuestionTopic *topic;

- (void).cxx_destruct;
- (id)answerChoices;
- (id)associatedContentAdamIdentifier;
- (id)associatedContentBundleIdentifier;
- (id)associatedContentDisplayName;
- (id)associatedContentIdentifier;
- (id)description;
- (id)expirationDate;
- (long long)hash;
- (id)id;
- (id)init;
- (id)initWithId:(id)arg1 topic:(id)arg2 title:(id)arg3 summary:(id)arg4;
- (id)initWithSystemId:(id)arg1 version:(double)arg2 id:(id)arg3 topic:(id)arg4 title:(id)arg5 summary:(id)arg6 notificationText:(id)arg7 answerChoices:(id)arg8;
- (id)initWithTopic:(id)arg1 title:(id)arg2 summary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)notificationText;
- (void)setAnswerChoices:(id)arg1;
- (void)setAssociatedContentAdamIdentifier:(id)arg1;
- (void)setAssociatedContentBundleIdentifier:(id)arg1;
- (void)setAssociatedContentDisplayName:(id)arg1;
- (void)setAssociatedContentIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setNotificationText:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)summary;
- (id)title;
- (id)topic;

@end
