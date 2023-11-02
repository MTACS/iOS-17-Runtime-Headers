
@interface _PSCNAutocompleteFeedbackEntered : NSObject <NSSecureCoding> {
    long long  _enterStatus;
}

@property (nonatomic, readonly) long long enterStatus;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)enterStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnterStatus:(long long)arg1;

@end
