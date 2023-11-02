
@interface _MLNLPFrameworkHandle : NSObject {
    int (* _NLPClassifierModelCopyPredictedLabelForTextImpl;
    int (* _NLPClassifierModelCreateWithDataImpl;
    int (* _NLPClassifierModelGetCurrentRevisionImpl;
    int (* _NLPClassifierModelGetRevisionImpl;
    int (* _NLPClassifierModelIsRevisionSupportedImpl;
    int (* _NLPEmbeddingModelCopyVectorForStringImpl;
    int (* _NLPEmbeddingModelCreateWithDataImpl;
    int (* _NLPEmbeddingModelGetCurrentRevisionImpl;
    int (* _NLPEmbeddingModelGetRevisionImpl;
    int (* _NLPEmbeddingModelIsRevisionSupportedImpl;
    int (* _NLPGazetteerModelCopyLabelForStringImpl;
    int (* _NLPGazetteerModelCreateWithDataImpl;
    int (* _NLPGazetteerModelGetCurrentRevisionImpl;
    int (* _NLPGazetteerModelGetRevisionImpl;
    int (* _NLPGazetteerModelIsRevisionSupportedImpl;
    int (* _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
    int (* _NLPSequenceModelCreateWithDataImpl;
    int (* _NLPSequenceModelGetCurrentRevisionImpl;
    int (* _NLPSequenceModelGetRevisionImpl;
    int (* _NLPSequenceModelIsRevisionSupportedImpl;
    bool  _valid;
}

@property (nonatomic, readonly) int (*NLPClassifierModelCopyPredictedLabelForTextImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPClassifierModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) int (*NLPEmbeddingModelCopyVectorForStringImpl;
@property (nonatomic, readonly) int (*NLPEmbeddingModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPEmbeddingModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPEmbeddingModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPEmbeddingModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) int (*NLPGazetteerModelCopyLabelForStringImpl;
@property (nonatomic, readonly) int (*NLPGazetteerModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPGazetteerModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPGazetteerModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPGazetteerModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelCreateWithDataImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelGetRevisionImpl;
@property (nonatomic, readonly) int (*NLPSequenceModelIsRevisionSupportedImpl;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)sharedHandle;

- (int (*)NLPClassifierModelCopyPredictedLabelForTextImpl;
- (int (*)NLPClassifierModelCreateWithDataImpl;
- (int (*)NLPClassifierModelGetCurrentRevisionImpl;
- (int (*)NLPClassifierModelGetRevisionImpl;
- (int (*)NLPClassifierModelIsRevisionSupportedImpl;
- (int (*)NLPEmbeddingModelCopyVectorForStringImpl;
- (int (*)NLPEmbeddingModelCreateWithDataImpl;
- (int (*)NLPEmbeddingModelGetCurrentRevisionImpl;
- (int (*)NLPEmbeddingModelGetRevisionImpl;
- (int (*)NLPEmbeddingModelIsRevisionSupportedImpl;
- (int (*)NLPGazetteerModelCopyLabelForStringImpl;
- (int (*)NLPGazetteerModelCreateWithDataImpl;
- (int (*)NLPGazetteerModelGetCurrentRevisionImpl;
- (int (*)NLPGazetteerModelGetRevisionImpl;
- (int (*)NLPGazetteerModelIsRevisionSupportedImpl;
- (int (*)NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
- (int (*)NLPSequenceModelCreateWithDataImpl;
- (int (*)NLPSequenceModelGetCurrentRevisionImpl;
- (int (*)NLPSequenceModelGetRevisionImpl;
- (int (*)NLPSequenceModelIsRevisionSupportedImpl;
- (id)init;
- (void*)initializeEmbeddingModelWithData:(id)arg1 error:(id*)arg2;
- (void*)initializeGazetteerModelWithData:(id)arg1 error:(id*)arg2;
- (void*)initializeSentenceClassifierModelWithData:(id)arg1 error:(id*)arg2;
- (void*)initializeWordTaggingModelWithData:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)predictLabelForWordString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;
- (id)predictLabelsForSentenceString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;
- (id)predictTokensLabelsLocationsLengthsForString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;
- (id)predictVectorForString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3;

@end
