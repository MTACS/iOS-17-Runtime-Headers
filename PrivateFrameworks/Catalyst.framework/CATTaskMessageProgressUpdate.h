
@interface CATTaskMessageProgressUpdate : CATTaskMessage {
    CATTaskProgress * _progress;
}

@property (nonatomic, copy) CATTaskProgress *progress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 progress:(id)arg2;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
