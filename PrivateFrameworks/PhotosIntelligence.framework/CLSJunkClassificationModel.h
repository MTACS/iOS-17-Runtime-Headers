
@interface CLSJunkClassificationModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _badFramingNode;
    CLSSignalNode * _badLightingNode;
    CLSSignalNode * _blurryNode;
    CLSSignalNode * _foodOrDrinkNode;
    CLSSignalNode * _legacyNode;
    CLSSignalNode * _medicalReferenceNode;
    CLSSignalNode * _negativeInternalNode;
    CLSSignalNode * _negativeNode;
    CLSSignalNode * _nonMemorableNode;
    CLSSignalNode * _otherNode;
    CLSSignalNode * _poorQualityNode;
    CLSSignalNode * _receiptOrDocumentNode;
    CLSSignalNode * _repairReferenceNode;
    CLSSignalNode * _screenshotNode;
    CLSSignalNode * _shoppingReferenceNode;
    CLSSignalNode * _textDocumentNode;
    CLSSignalNode * _tragicFailureInternalNode;
    CLSSignalNode * _tragicFailureNode;
    CLSSignalNode * _utilityReferenceNode;
    unsigned long long  _version;
}

@property (readonly) CLSSignalNode *badFramingNode;
@property (readonly) CLSSignalNode *badLightingNode;
@property (readonly) CLSSignalNode *blurryNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *foodOrDrinkNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *legacyNode;
@property (readonly) CLSSignalNode *medicalReferenceNode;
@property (readonly) CLSSignalNode *negativeInternalNode;
@property (readonly) CLSSignalNode *negativeNode;
@property (readonly) CLSSignalNode *nonMemorableNode;
@property (readonly) CLSSignalNode *otherNode;
@property (readonly) CLSSignalNode *poorQualityNode;
@property (readonly) CLSSignalNode *receiptOrDocumentNode;
@property (readonly) CLSSignalNode *repairReferenceNode;
@property (readonly) CLSSignalNode *screenshotNode;
@property (readonly) CLSSignalNode *shoppingReferenceNode;
@property (readonly) Class superclass;
@property (readonly) CLSSignalNode *textDocumentNode;
@property (readonly) CLSSignalNode *tragicFailureInternalNode;
@property (readonly) CLSSignalNode *tragicFailureNode;
@property (readonly) CLSSignalNode *utilityReferenceNode;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)badFramingNode;
- (id)badLightingNode;
- (id)blurryNode;
- (id)foodOrDrinkNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)legacyNode;
- (id)medicalReferenceNode;
- (id)modelInfo;
- (id)negativeInternalNode;
- (id)negativeNode;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (id)nonMemorableNode;
- (id)otherNode;
- (id)poorQualityNode;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (id)receiptOrDocumentNode;
- (id)repairReferenceNode;
- (id)screenshotNode;
- (void)setupVersion31;
- (void)setupVersion32;
- (void)setupVersion40;
- (void)setupVersion81;
- (void)setupVersion86;
- (id)shoppingReferenceNode;
- (id)textDocumentNode;
- (id)tragicFailureInternalNode;
- (id)tragicFailureNode;
- (id)utilityReferenceNode;
- (unsigned long long)version;

@end
