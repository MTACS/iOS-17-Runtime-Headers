
@interface DSFileOperation : NSObject <DSHashableEquatable, NSSecureCoding> {
    NSDate * _dateStarted;
    DSFileOperationID * _operationID;
    NSProgress * _progress;
    UTType * _utType;
}

@property (nonatomic, retain) NSDate *dateStarted;
@property (nonatomic, retain) DSFileOperationID *operationID;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) UTType *utType;

+ (bool)dateIsBusyFolderDate:(double)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateStarted;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operationID;
- (id)progress;
- (void)setDateStarted:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setUtType:(id)arg1;
- (id)utType;

@end
