
@protocol ObjcQOSErrorMessageProtocolInternal

@required

- (void)fetchLocalizedErrorMessageForItems:(void *)arg1 :(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, QOSAlertMessageInternal *, void*
- (QOSAlertMessageInternal *)getLocalizedErrorMessageForItems:(NSDictionary *)arg1 :(NSError *)arg2;

@end
