
@interface SHMediaItem : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * __rawResponseSongs;
    NSString * _fuzzyRepresentation;
    NSDictionary * _properties;
    NSUUID * _underlyingIdentifier;
}

@property (nonatomic, retain) NSDictionary *_rawResponseSongs;
@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) NSString *appleMusicID;
@property (nonatomic, readonly) NSURL *appleMusicURL;
@property (nonatomic, readonly, copy) NSString *artist;
@property (nonatomic, readonly) NSURL *artworkURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool explicitContent;
@property (nonatomic, readonly) NSArray *frequencySkewRanges;
@property (nonatomic, readonly, copy) NSString *fuzzyRepresentation;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *isrc;
@property (nonatomic, readonly, copy) NSString *lyricsSnippet;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) long long shazamCount;
@property (nonatomic, readonly, copy) NSString *shazamID;
@property (nonatomic, readonly, copy) NSArray *staticLyricLines;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) NSArray *timeRanges;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSUUID *underlyingIdentifier;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) NSURL *webURL;

// Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit

+ (void)fetchMediaItemWithShazamID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchMediaItemsWithShazamIDs:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)mediaItemWithDictionary:(id)arg1;
+ (id)mediaItemWithProperties:(id)arg1;
+ (id)serverConnection;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_rawResponseSongs;
- (id)albumName;
- (id)appleMusicID;
- (id)appleMusicURL;
- (id)artist;
- (id)artworkURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)debugDescription;
- (bool)describesFrequencySkew:(double)arg1;
- (bool)describesOffset:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)explicitContent;
- (id)frequencySkewRanges;
- (id)fuzzyRepresentation;
- (id)genres;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualMediaItem:(id)arg1;
- (id)isrc;
- (id)lyricsSnippet;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)properties;
- (id)providerIdentifier;
- (id)releaseDate;
- (void)setUnderlyingIdentifier:(id)arg1;
- (void)set_rawResponseSongs:(id)arg1;
- (long long)shazamCount;
- (id)shazamID;
- (id)staticLyricLines;
- (id)subtitle;
- (id)timeRanges;
- (id)title;
- (id)underlyingIdentifier;
- (id)validValueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)videoURL;
- (id)webURL;

// Image: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI

+ (void)presentMediaItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)presentMediaItem:(id)arg1 presentationSettings:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sh_uiServerConnection;

// Image: /usr/lib/swift/libswiftShazamKit.dylib

- (id)objectForKeyedSubscript:(id)arg1;

@end
