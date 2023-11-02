
@interface SGMIWarningsDetectors : NSObject {
    SGMIWarningsDetectionRegexes * _attachment;
    SGMIWarningsDetectionRegexes * _followUpOnIncomingMails;
    SGMIWarningsDetectionRegexes * _followUpOnOutgoingMailsAsks;
    SGMIWarningsDetectionRegexes * _followUpOnOutgoingMailsQuestions;
    SGMIWarningsDetectionRegexes * _nickname;
    SGMIWarningsDetectionRegexes * _recipient;
    SGMIWarningsDetectionRegexes * _recipientConservative;
}

@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *attachment;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *followUpOnIncomingMails;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsAsks;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsQuestions;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *nickname;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *recipient;
@property (nonatomic, readonly) SGMIWarningsDetectionRegexes *recipientConservative;

- (void).cxx_destruct;
- (id)attachment;
- (id)description;
- (id)followUpOnIncomingMails;
- (id)followUpOnOutgoingMailsAsks;
- (id)followUpOnOutgoingMailsQuestions;
- (id)initWithAttachmentDictionary:(id)arg1 recipientConservativeDictionary:(id)arg2 recipientDictionary:(id)arg3 nicknameDictionary:(id)arg4 followUpOnOutgoingMailsQuestionsDictionary:(id)arg5 followUpOnOutgoingMailsAsksDictionary:(id)arg6 followUpOnIncomingMailsDictionary:(id)arg7 compiledRegexCache:(id)arg8;
- (id)nickname;
- (id)recipient;
- (id)recipientConservative;

@end
