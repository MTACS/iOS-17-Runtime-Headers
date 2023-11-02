
@interface _WBBookmarkSyncDataForPositionDecoding : NSObject <NSSecureCoding> {
    WBSCRDTPosition * _position;
}

@property (nonatomic, readonly) WBSCRDTPosition *position;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)position;

@end
