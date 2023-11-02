
@interface MADownloadConfig : NSObject <NSSecureCoding> {
    bool  _discretionary;
}

@property (nonatomic) bool discretionary;

+ (bool)supportsSecureCoding;

- (bool)discretionary;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (void)logConfig;
- (void)setDiscretionary:(bool)arg1;
- (id)summary;

@end
