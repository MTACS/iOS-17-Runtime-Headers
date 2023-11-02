
@interface _MLInternalNLPModelWriter : NSObject

+ (bool)saveCustomSentenceClassifierModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id*)arg5;
+ (bool)saveCustomSentenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id*)arg5;
+ (bool)saveCustomSequenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id*)arg5;
+ (bool)saveCustomWordTaggingModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id*)arg5;

@end
