
@interface ICASMentionAddData : NSObject <AADataEventType> {
    NSNumber * _isExistingMention;
    ICASMentionAddApproach * _mentionAddApproach;
}

@property (nonatomic, readonly) NSNumber *isExistingMention;
@property (nonatomic, readonly) ICASMentionAddApproach *mentionAddApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithIsExistingMention:(id)arg1 mentionAddApproach:(id)arg2;
- (id)isExistingMention;
- (id)mentionAddApproach;
- (id)toDict;

@end
