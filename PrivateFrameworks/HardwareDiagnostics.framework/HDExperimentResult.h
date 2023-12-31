
@interface HDExperimentResult : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _auxiliaryData;
    NSMutableDictionary * _files;
    NSMutableDictionary * _measurements;
}

@property (nonatomic, readonly) NSMutableDictionary *auxiliaryData;
@property (nonatomic, readonly) NSMutableDictionary *files;
@property (nonatomic, readonly) NSMutableDictionary *measurements;

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
- (bool)isEqualToExperimentResult:(id)arg1;
- (id)measurements;

@end
