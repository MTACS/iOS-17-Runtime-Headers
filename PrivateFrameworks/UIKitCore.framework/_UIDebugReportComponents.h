
@interface _UIDebugReportComponents : NSObject {
    NSString * _body;
    NSString * _footer;
    NSString * _header;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, copy) NSString *header;

- (void).cxx_destruct;
- (id)body;
- (id)footer;
- (id)header;
- (id)init;
- (void)setBody:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;

@end
