
@interface SFFeedback : NSObject <CRFeedback, NSCopying, NSSecureCoding> {
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long queryId;
@property (readonly) Class superclass;
@property (readonly) unsigned long long timestamp;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)queryId;
- (void)setQueryId:(unsigned long long)arg1;
- (unsigned long long)timestamp;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
