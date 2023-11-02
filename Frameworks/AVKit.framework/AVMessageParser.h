
@interface AVMessageParser : NSObject {
    NSString * _bodyLengthKey;
    NSString * _compressionMethodKey;
    NSString * _headerBodySeparator;
    NSData * _headerBodySeparatorData;
    NSString * _lineSeparator;
    NSData * _lineSeparatorData;
}

@property (nonatomic, copy) NSString *bodyLengthKey;
@property (nonatomic, copy) NSString *compressionMethodKey;
@property (nonatomic, copy) NSString *headerBodySeparator;
@property (nonatomic, retain) NSData *headerBodySeparatorData;
@property (nonatomic, copy) NSString *lineSeparator;
@property (nonatomic, retain) NSData *lineSeparatorData;

+ (id)airMessageParser;

- (void).cxx_destruct;
- (id)bodyLengthKey;
- (id)compressionMethodKey;
- (id)headerBodySeparator;
- (id)headerBodySeparatorData;
- (id)init;
- (id)initWithLineSeparator:(id)arg1 headerBodySeparator:(id)arg2 bodyLengthKey:(id)arg3 compressionMethodKey:(id)arg4;
- (id)lineSeparator;
- (id)lineSeparatorData;
- (id)partsWithData:(id)arg1;
- (void)setBodyLengthKey:(id)arg1;
- (void)setCompressionMethodKey:(id)arg1;
- (void)setHeaderBodySeparator:(id)arg1;
- (void)setHeaderBodySeparatorData:(id)arg1;
- (void)setLineSeparator:(id)arg1;
- (void)setLineSeparatorData:(id)arg1;

@end
