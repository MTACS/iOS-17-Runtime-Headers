
@interface WorkoutCore.Occurrence : NSObject {
    void count;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  countModificationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  creationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modificationDate;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
