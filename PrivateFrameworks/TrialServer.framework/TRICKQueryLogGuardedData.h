
@interface TRICKQueryLogGuardedData : NSObject {
    bool  failed;
    NSFileHandle * fh;
    NSMutableSet * uniqueLines;
}

- (void).cxx_destruct;

@end
