
@interface ICASMentionAddApproach : NSObject <AADataType> {
    long long  _mentionAddApproach;
}

@property (nonatomic, readonly) long long mentionAddApproach;

- (id)initWithMentionAddApproach:(long long)arg1;
- (long long)mentionAddApproach;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
