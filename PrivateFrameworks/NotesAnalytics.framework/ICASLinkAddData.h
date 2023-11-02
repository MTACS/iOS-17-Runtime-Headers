
@interface ICASLinkAddData : NSObject <AADataEventType> {
    NSNumber * _isTokenizedLink;
    ICASLinkAddApproach * _linkAddApproach;
    ICASLinkContentType * _linkContentType;
}

@property (nonatomic, readonly) NSNumber *isTokenizedLink;
@property (nonatomic, readonly) ICASLinkAddApproach *linkAddApproach;
@property (nonatomic, readonly) ICASLinkContentType *linkContentType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithLinkAddApproach:(id)arg1 linkContentType:(id)arg2 isTokenizedLink:(id)arg3;
- (id)isTokenizedLink;
- (id)linkAddApproach;
- (id)linkContentType;
- (id)toDict;

@end
