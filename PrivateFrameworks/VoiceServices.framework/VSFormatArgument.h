
@interface VSFormatArgument : NSObject {
    NSDictionary * attributes;
    NSString * formatSpecifier;
    NSString * formattedArg;
}

- (void)dealloc;

@end
