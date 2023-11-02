
@interface BDSReadingHistoryUpdateInfo : NSObject <NSCoding, NSSecureCoding> {
    void update;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BDSReadingHistoryUpdate *update;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;
- (id)update;

@end
