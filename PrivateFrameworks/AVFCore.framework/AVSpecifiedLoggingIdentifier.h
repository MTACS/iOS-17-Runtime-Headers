
@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    AVSpecifiedLoggingIdentifierInternal * _specifiedLoggingIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithSpecifiedName:(id)arg1;
- (id)makeDerivedIdentifier;
- (id)name;

@end
