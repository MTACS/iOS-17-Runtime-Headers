
@protocol CoreMLModelSecurityServiceToClientProtocol

@required

- (void)clientFeatureNames:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)clientFeatureValueForName:(void *)arg1 uniqueKeyForProvider:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLFeatureValue *, NSError *, void*

@end
