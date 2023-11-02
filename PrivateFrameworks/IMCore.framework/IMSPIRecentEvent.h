
@interface IMSPIRecentEvent : NSObject {
    NSDate * _date;
    NSString * _handle;
    NSString * _labelID;
}

@property (retain) NSDate *date;
@property (retain) NSString *handle;
@property (retain) NSString *labelID;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)handle;
- (id)initWithHandle:(id)arg1 date:(id)arg2;
- (id)initWithLabelID:(id)arg1 date:(id)arg2;
- (id)labelID;
- (void)setDate:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setLabelID:(id)arg1;

@end
