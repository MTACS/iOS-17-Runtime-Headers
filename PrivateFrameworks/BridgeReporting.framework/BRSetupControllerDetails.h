
@interface BRSetupControllerDetails : NSObject {
    NSString * _controllerName;
    NSNumber * _controllerOrder;
    NSNumber * _timeStamp;
}

@property (nonatomic, retain) NSString *controllerName;
@property (nonatomic, retain) NSNumber *controllerOrder;
@property (nonatomic, retain) NSNumber *timeStamp;

- (void).cxx_destruct;
- (id)controllerName;
- (id)controllerOrder;
- (void)setControllerName:(id)arg1;
- (void)setControllerOrder:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;

@end
