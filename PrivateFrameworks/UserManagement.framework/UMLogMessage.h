
@interface UMLogMessage : NSObject {
    NSMutableArray * _privateStrings;
    NSMutableArray * _publicStrings;
}

- (void).cxx_destruct;
- (id)init;

@end
