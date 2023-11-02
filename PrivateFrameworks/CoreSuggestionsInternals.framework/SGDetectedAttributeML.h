
@interface SGDetectedAttributeML : NSObject {
    <PMLTrainingProtocol> * _localTraining;
}

- (void).cxx_destruct;
- (void)addSessionForTrainingWithSource:(id)arg1 label:(long long)arg2 language:(id)arg3 objective:(unsigned long long)arg4 spotlightRef:(id)arg5 embeddedFeaturizer:(id /* block */)arg6;
- (id)birthdayCongratsTextMessage:(id)arg1 andLanguage:(id)arg2 andHealthStore:(id)arg3;
- (id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2 extractionInfo:(id)arg3 isUnlikelyPhone:(bool)arg4;
- (id)detectionFromMessage:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4 inConversation:(id)arg5 entityLanguage:(id)arg6;
- (void)handleTextMessageContactSharing:(id)arg1 andMatch:(id)arg2 andContext:(id)arg3 andLanguage:(id)arg4 withSupervision:(id)arg5;
- (void)handleTextMessageContactSharingWithNegativeSample:(id)arg1 andLanguage:(id)arg2;
- (id)init;
- (id)initWithTraining:(id)arg1;
- (id)selfIdDetectionWithTextMessage:(id)arg1 inConversation:(id)arg2 withSupervision:(id)arg3;

@end
