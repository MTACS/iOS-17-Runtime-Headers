
@interface FCUserEventHistorySession : NSObject {
    NSDate * _date;
    NSString * _fileName;
    NSString * _identifier;
    NSString * _path;
    NSNumber * _sizeNumber;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, readonly) long long size;
@property (nonatomic, retain) NSNumber *sizeNumber;

+ (id)dateFromSessionID:(id)arg1;

- (void).cxx_destruct;
- (id)compressedData;
- (id)data;
- (id)date;
- (id)description;
- (id)fileName;
- (id)identifier;
- (id)initWithSessionID:(id)arg1 path:(id)arg2;
- (id)path;
- (void)setDate:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSizeNumber:(id)arg1;
- (long long)size;
- (id)sizeNumber;

@end
