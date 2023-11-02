
@interface MXMDisplayDescriptor : NSObject {
    CADisplay * _display;
}

@property (nonatomic, readonly) CADisplay *display;
@property (getter=main, nonatomic, readonly) bool isMain;
@property (nonatomic, readonly) bool main;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double refreshRate;

- (void).cxx_destruct;
- (id)display;
- (id)initWithDisplay:(id)arg1;
- (bool)main;
- (id)name;
- (double)refreshRate;

@end
