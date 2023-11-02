
@interface MapsSuggestions.MapsSuggestionsOrderPickup : NSObject {
    void merchantDisplayName;
    void orderIdentifier;
    void orderTypeIdentifier;
    void pickupAddress;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pickupEndDate;
    void pickupIdentifier;
    void pickupLocation;
    void pickupLocationDisplayName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pickupStartDate;
}

- (void).cxx_destruct;
- (id)init;

@end
