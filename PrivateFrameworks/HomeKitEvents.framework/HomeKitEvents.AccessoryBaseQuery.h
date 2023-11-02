
@interface HomeKitEvents.AccessoryBaseQuery : HomeKitEvents.BaseQuery {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessoryIdentifier;
    void eventCategory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  homeIdentifier;
}

@end
