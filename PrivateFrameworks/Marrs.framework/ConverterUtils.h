
@interface ConverterUtils : NSObject

+ (struct unique_ptr<sirinluinternalmention_detector::MentionDetectorRequest, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> { struct __compressed_pair<sirinluinternalmention_detector::MentionDetectorRequest *, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> { struct MentionDetectorRequest {} *x_1_1_1; } x1; })convertMentionDetectorRequestFromObjCToCpp:(id)arg1;
+ (id)convertMentionDetectorResponseFromCppToObjC:(void*)arg1;
+ (struct unique_ptr<sirinluinternalmention_resolver::MentionResolverRequest, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> { struct __compressed_pair<sirinluinternalmention_resolver::MentionResolverRequest *, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> { struct MentionResolverRequest {} *x_1_1_1; } x1; })convertMentionResolverRequestFromObjCToCpp:(id)arg1;
+ (id)convertMentionResolverResponseFromCppToObjC:(void*)arg1;
+ (struct Reader { char *x1; unsigned long long x2; unsigned long long x3; bool x4; })getCppReaderFromObjCObject:(id)arg1;

@end
