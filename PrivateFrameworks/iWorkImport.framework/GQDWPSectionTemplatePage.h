
@interface GQDWPSectionTemplatePage : NSObject <GQDNameMappable> {
    struct __CFString { } * mFooterIdentifier;
    struct __CFString { } * mHeaderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (struct __CFString { }*)footerIdentifier;
- (struct __CFString { }*)headerIdentifier;

@end
