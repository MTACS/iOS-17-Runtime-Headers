
@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _namedEntityRecords;
    NSArray * _topicRecords;
}

@property (nonatomic, readonly) NSArray *namedEntityRecords;
@property (nonatomic, readonly) NSArray *topicRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2;
- (bool)isEmpty;
- (id)merge:(id)arg1;
- (id)namedEntityRecords;
- (id)topicRecords;

@end
