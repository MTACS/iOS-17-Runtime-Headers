
@interface SGDateComponents : SGLabeledObject {
    NSDateComponents * _dateComponents;
}

@property (nonatomic, readonly) NSDateComponents *dateComponents;

+ (id)dateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateComponents;
- (id)dateString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateComponents:(id)arg1;

@end
