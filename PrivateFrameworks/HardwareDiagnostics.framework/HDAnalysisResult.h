
@interface HDAnalysisResult : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _auxiliaryData;
    NSMutableDictionary * _files;
    NSMutableArray * _measuredResults;
}

@property (nonatomic, readonly) NSMutableDictionary *auxiliaryData;
@property (nonatomic, readonly) NSMutableDictionary *files;
@property (nonatomic, readonly) NSMutableArray *measuredResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auxiliaryData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)files;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAnalysisResult:(id)arg1;
- (id)measuredResults;

@end
