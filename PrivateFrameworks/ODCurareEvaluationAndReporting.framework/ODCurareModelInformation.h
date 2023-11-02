
@interface ODCurareModelInformation : NSObject {
    ODCurareReportFillerModelInformation * _modelInformation;
    NSURL * _modelURL;
}

@property (nonatomic, retain) ODCurareReportFillerModelInformation *modelInformation;
@property (nonatomic, retain) NSURL *modelURL;

- (void).cxx_destruct;
- (id)initWithModelInformation:(id)arg1 modelURL:(id)arg2;
- (id)modelInformation;
- (id)modelURL;
- (void)setModelInformation:(id)arg1;
- (void)setModelURL:(id)arg1;

@end
