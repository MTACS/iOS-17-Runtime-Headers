
@interface BDSReadingHistoryServiceStatus : NSObject <NSSecureCoding> {
    void value;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isLoaded;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsLoaded:(bool)arg1;
- (bool)isLoaded;

@end
